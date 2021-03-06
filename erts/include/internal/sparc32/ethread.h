/* 
 * %CopyrightBegin%
 * 
 * Copyright Ericsson AB 2005-2010. All Rights Reserved.
 * 
 * The contents of this file are subject to the Erlang Public License,
 * Version 1.1, (the "License"); you may not use this file except in
 * compliance with the License. You should have received a copy of the
 * Erlang Public License along with this software. If not, it can be
 * retrieved online at http://www.erlang.org/.
 * 
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 * 
 * %CopyrightEnd%
 */

/*
 * Low-level ethread support on SPARC V9.
 * Author: Mikael Pettersson.
 */
#ifndef ETHREAD_SPARC32_ETHREAD_H
#define ETHREAD_SPARC32_ETHREAD_H

#define ETHR_ATOMIC_WANT_32BIT_IMPL__
#include "atomic.h"
#if ETHR_SIZEOF_PTR == 8
#  define ETHR_ATOMIC_WANT_64BIT_IMPL__
#  include "atomic.h"
#endif
#include "spinlock.h"
#include "rwlock.h"

#define ETHR_HAVE_NATIVE_ATOMICS 1
#define ETHR_HAVE_NATIVE_SPINLOCKS 1
#define ETHR_HAVE_NATIVE_RWSPINLOCKS 1

#endif /* ETHREAD_SPARC32_ETHREAD_H */
