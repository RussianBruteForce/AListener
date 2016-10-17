/*
 *
 *     This file is part of AListener.
 *
 *  AListener is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  AListener is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with AListener.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <jni.h>
#include <string>
#include <future>

#include "AListener.h"

static AListener listener;

extern "C"
jstring
Java_org_alistener_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    listener.main();

    std::string hello = "Job is done!";
    return env->NewStringUTF(hello.c_str());
}
