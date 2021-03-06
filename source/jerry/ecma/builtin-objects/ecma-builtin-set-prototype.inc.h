/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Set.prototype built-in description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

#if ENABLED (JERRY_ES2015_BUILTIN_SET)

/* Object properties:
 *  (property name, object pointer getter) */

/* ECMA-262 v6, 23.2.3.2 */
OBJECT_VALUE (LIT_MAGIC_STRING_CONSTRUCTOR,
              ECMA_BUILTIN_ID_MAP,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

#if ENABLED (JERRY_ES2015_BUILTIN_SYMBOL)
/* ECMA-262 v6, 23.1.3.13 */
STRING_VALUE (LIT_GLOBAL_SYMBOL_TO_STRING_TAG,
              LIT_MAGIC_STRING_SET_UL,
              ECMA_PROPERTY_FLAG_CONFIGURABLE)
#endif /* ENABLED (JERRY_ES2015_BUILTIN_SYMBOL) */

/* Routine properties:
 *  (property name, C routine name, arguments number or NON_FIXED, value of the routine's length property) */
ROUTINE (LIT_MAGIC_STRING_ADD, ecma_builtin_set_prototype_object_add, 1, 1)
ROUTINE (LIT_MAGIC_STRING_CLEAR, ecma_builtin_set_prototype_object_clear, 0, 0)
ROUTINE (LIT_MAGIC_STRING_DELETE, ecma_builtin_set_prototype_object_delete, 1, 1)
ROUTINE (LIT_MAGIC_STRING_FOR_EACH_UL, ecma_builtin_set_prototype_object_foreach, 2, 1)
ROUTINE (LIT_MAGIC_STRING_HAS, ecma_builtin_set_prototype_object_has, 1, 1)

ACCESSOR_READ_ONLY (LIT_MAGIC_STRING_SIZE,
                    ecma_builtin_set_prototype_object_size_getter,
                    ECMA_PROPERTY_FIXED)

#endif /* ENABLED (JERRY_ES2015_BUILTIN_SET) */

#include "ecma-builtin-helpers-macro-undefs.inc.h"
