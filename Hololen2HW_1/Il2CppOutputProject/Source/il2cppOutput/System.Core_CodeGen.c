#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000017 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000018 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001E System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001F TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000020 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000022 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000023 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000025 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000027 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002B System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000045 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000046 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000047 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000004A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004C TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000050 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000052 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000053 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000054 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000055 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000056 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000057 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x0000005B TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005D System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005F System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000060 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000061 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000062 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000063 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000064 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000065 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000066 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000067 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000068 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000069 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000006B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000006C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000006D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000006E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000070 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000071 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000072 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000073 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000074 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000075 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000076 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000077 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000078 System.Void System.Linq.Set`1::Resize()
// 0x00000079 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000007A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000007B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000082 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000083 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000084 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000085 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000086 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000087 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000088 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000089 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000008A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000008B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000008C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000090 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000094 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000095 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000096 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000099 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000009B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000009C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000009D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000A0 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A4 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A6 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000AB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000AC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[173] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[173] = 
{
	3561,
	3716,
	3716,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[56] = 
{
	{ 0x02000004, { 78, 4 } },
	{ 0x02000005, { 82, 9 } },
	{ 0x02000006, { 93, 7 } },
	{ 0x02000007, { 102, 10 } },
	{ 0x02000008, { 114, 11 } },
	{ 0x02000009, { 128, 9 } },
	{ 0x0200000A, { 140, 12 } },
	{ 0x0200000B, { 155, 1 } },
	{ 0x0200000C, { 156, 2 } },
	{ 0x0200000D, { 158, 12 } },
	{ 0x0200000E, { 170, 11 } },
	{ 0x0200000F, { 181, 12 } },
	{ 0x02000010, { 193, 6 } },
	{ 0x02000011, { 199, 2 } },
	{ 0x02000013, { 201, 8 } },
	{ 0x02000015, { 209, 3 } },
	{ 0x02000016, { 214, 5 } },
	{ 0x02000017, { 219, 7 } },
	{ 0x02000018, { 226, 3 } },
	{ 0x02000019, { 229, 7 } },
	{ 0x0200001A, { 236, 4 } },
	{ 0x0200001B, { 240, 21 } },
	{ 0x0200001D, { 261, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 2 } },
	{ 0x0600000B, { 35, 1 } },
	{ 0x0600000C, { 36, 1 } },
	{ 0x0600000D, { 37, 2 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 3 } },
	{ 0x06000011, { 45, 2 } },
	{ 0x06000012, { 47, 1 } },
	{ 0x06000013, { 48, 2 } },
	{ 0x06000014, { 50, 4 } },
	{ 0x06000015, { 54, 4 } },
	{ 0x06000016, { 58, 3 } },
	{ 0x06000017, { 61, 1 } },
	{ 0x06000018, { 62, 1 } },
	{ 0x06000019, { 63, 3 } },
	{ 0x0600001A, { 66, 3 } },
	{ 0x0600001B, { 69, 2 } },
	{ 0x0600001C, { 71, 2 } },
	{ 0x0600001D, { 73, 5 } },
	{ 0x0600002D, { 91, 2 } },
	{ 0x06000032, { 100, 2 } },
	{ 0x06000037, { 112, 2 } },
	{ 0x0600003D, { 125, 3 } },
	{ 0x06000042, { 137, 3 } },
	{ 0x06000047, { 152, 3 } },
	{ 0x0600007D, { 212, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[263] = 
{
	{ (Il2CppRGCTXDataType)2, 1976 },
	{ (Il2CppRGCTXDataType)3, 8580 },
	{ (Il2CppRGCTXDataType)2, 3155 },
	{ (Il2CppRGCTXDataType)2, 2645 },
	{ (Il2CppRGCTXDataType)3, 14362 },
	{ (Il2CppRGCTXDataType)2, 2055 },
	{ (Il2CppRGCTXDataType)2, 2652 },
	{ (Il2CppRGCTXDataType)3, 14397 },
	{ (Il2CppRGCTXDataType)2, 2647 },
	{ (Il2CppRGCTXDataType)3, 14374 },
	{ (Il2CppRGCTXDataType)2, 1977 },
	{ (Il2CppRGCTXDataType)3, 8581 },
	{ (Il2CppRGCTXDataType)2, 3172 },
	{ (Il2CppRGCTXDataType)2, 2654 },
	{ (Il2CppRGCTXDataType)3, 14409 },
	{ (Il2CppRGCTXDataType)2, 2072 },
	{ (Il2CppRGCTXDataType)2, 2662 },
	{ (Il2CppRGCTXDataType)3, 14551 },
	{ (Il2CppRGCTXDataType)2, 2658 },
	{ (Il2CppRGCTXDataType)3, 14474 },
	{ (Il2CppRGCTXDataType)2, 701 },
	{ (Il2CppRGCTXDataType)3, 26 },
	{ (Il2CppRGCTXDataType)3, 27 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)3, 5941 },
	{ (Il2CppRGCTXDataType)2, 702 },
	{ (Il2CppRGCTXDataType)3, 34 },
	{ (Il2CppRGCTXDataType)3, 35 },
	{ (Il2CppRGCTXDataType)2, 1188 },
	{ (Il2CppRGCTXDataType)3, 5946 },
	{ (Il2CppRGCTXDataType)3, 16835 },
	{ (Il2CppRGCTXDataType)2, 711 },
	{ (Il2CppRGCTXDataType)3, 131 },
	{ (Il2CppRGCTXDataType)2, 2377 },
	{ (Il2CppRGCTXDataType)3, 12339 },
	{ (Il2CppRGCTXDataType)3, 6681 },
	{ (Il2CppRGCTXDataType)3, 16802 },
	{ (Il2CppRGCTXDataType)2, 705 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)3, 16854 },
	{ (Il2CppRGCTXDataType)2, 714 },
	{ (Il2CppRGCTXDataType)3, 160 },
	{ (Il2CppRGCTXDataType)2, 830 },
	{ (Il2CppRGCTXDataType)3, 918 },
	{ (Il2CppRGCTXDataType)3, 919 },
	{ (Il2CppRGCTXDataType)2, 2056 },
	{ (Il2CppRGCTXDataType)3, 9080 },
	{ (Il2CppRGCTXDataType)3, 16812 },
	{ (Il2CppRGCTXDataType)2, 709 },
	{ (Il2CppRGCTXDataType)3, 117 },
	{ (Il2CppRGCTXDataType)2, 1777 },
	{ (Il2CppRGCTXDataType)2, 1320 },
	{ (Il2CppRGCTXDataType)2, 1435 },
	{ (Il2CppRGCTXDataType)2, 1549 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)2, 1321 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)2, 1550 },
	{ (Il2CppRGCTXDataType)2, 1437 },
	{ (Il2CppRGCTXDataType)2, 1551 },
	{ (Il2CppRGCTXDataType)3, 5942 },
	{ (Il2CppRGCTXDataType)2, 1023 },
	{ (Il2CppRGCTXDataType)2, 1421 },
	{ (Il2CppRGCTXDataType)2, 1422 },
	{ (Il2CppRGCTXDataType)2, 1547 },
	{ (Il2CppRGCTXDataType)3, 5940 },
	{ (Il2CppRGCTXDataType)2, 1420 },
	{ (Il2CppRGCTXDataType)2, 1546 },
	{ (Il2CppRGCTXDataType)3, 5939 },
	{ (Il2CppRGCTXDataType)2, 1319 },
	{ (Il2CppRGCTXDataType)2, 1434 },
	{ (Il2CppRGCTXDataType)2, 1318 },
	{ (Il2CppRGCTXDataType)3, 16782 },
	{ (Il2CppRGCTXDataType)3, 5425 },
	{ (Il2CppRGCTXDataType)2, 1094 },
	{ (Il2CppRGCTXDataType)2, 1424 },
	{ (Il2CppRGCTXDataType)2, 1548 },
	{ (Il2CppRGCTXDataType)2, 1647 },
	{ (Il2CppRGCTXDataType)3, 8582 },
	{ (Il2CppRGCTXDataType)3, 8584 },
	{ (Il2CppRGCTXDataType)2, 530 },
	{ (Il2CppRGCTXDataType)3, 8583 },
	{ (Il2CppRGCTXDataType)3, 8592 },
	{ (Il2CppRGCTXDataType)2, 1980 },
	{ (Il2CppRGCTXDataType)2, 2648 },
	{ (Il2CppRGCTXDataType)3, 14375 },
	{ (Il2CppRGCTXDataType)3, 8593 },
	{ (Il2CppRGCTXDataType)2, 1487 },
	{ (Il2CppRGCTXDataType)2, 1582 },
	{ (Il2CppRGCTXDataType)3, 5954 },
	{ (Il2CppRGCTXDataType)3, 16752 },
	{ (Il2CppRGCTXDataType)2, 2659 },
	{ (Il2CppRGCTXDataType)3, 14475 },
	{ (Il2CppRGCTXDataType)3, 8585 },
	{ (Il2CppRGCTXDataType)2, 1979 },
	{ (Il2CppRGCTXDataType)2, 2646 },
	{ (Il2CppRGCTXDataType)3, 14363 },
	{ (Il2CppRGCTXDataType)3, 5953 },
	{ (Il2CppRGCTXDataType)3, 8586 },
	{ (Il2CppRGCTXDataType)3, 16751 },
	{ (Il2CppRGCTXDataType)2, 2655 },
	{ (Il2CppRGCTXDataType)3, 14410 },
	{ (Il2CppRGCTXDataType)3, 8599 },
	{ (Il2CppRGCTXDataType)2, 1981 },
	{ (Il2CppRGCTXDataType)2, 2653 },
	{ (Il2CppRGCTXDataType)3, 14398 },
	{ (Il2CppRGCTXDataType)3, 9123 },
	{ (Il2CppRGCTXDataType)3, 4567 },
	{ (Il2CppRGCTXDataType)3, 5955 },
	{ (Il2CppRGCTXDataType)3, 4566 },
	{ (Il2CppRGCTXDataType)3, 8600 },
	{ (Il2CppRGCTXDataType)3, 16753 },
	{ (Il2CppRGCTXDataType)2, 2663 },
	{ (Il2CppRGCTXDataType)3, 14552 },
	{ (Il2CppRGCTXDataType)3, 8613 },
	{ (Il2CppRGCTXDataType)2, 1983 },
	{ (Il2CppRGCTXDataType)2, 2661 },
	{ (Il2CppRGCTXDataType)3, 14477 },
	{ (Il2CppRGCTXDataType)3, 8614 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)2, 1585 },
	{ (Il2CppRGCTXDataType)3, 5959 },
	{ (Il2CppRGCTXDataType)3, 5958 },
	{ (Il2CppRGCTXDataType)2, 2650 },
	{ (Il2CppRGCTXDataType)3, 14377 },
	{ (Il2CppRGCTXDataType)3, 16758 },
	{ (Il2CppRGCTXDataType)2, 2660 },
	{ (Il2CppRGCTXDataType)3, 14476 },
	{ (Il2CppRGCTXDataType)3, 8606 },
	{ (Il2CppRGCTXDataType)2, 1982 },
	{ (Il2CppRGCTXDataType)2, 2657 },
	{ (Il2CppRGCTXDataType)3, 14412 },
	{ (Il2CppRGCTXDataType)3, 5957 },
	{ (Il2CppRGCTXDataType)3, 5956 },
	{ (Il2CppRGCTXDataType)3, 8607 },
	{ (Il2CppRGCTXDataType)2, 2649 },
	{ (Il2CppRGCTXDataType)3, 14376 },
	{ (Il2CppRGCTXDataType)3, 16757 },
	{ (Il2CppRGCTXDataType)2, 2656 },
	{ (Il2CppRGCTXDataType)3, 14411 },
	{ (Il2CppRGCTXDataType)3, 8620 },
	{ (Il2CppRGCTXDataType)2, 1984 },
	{ (Il2CppRGCTXDataType)2, 2665 },
	{ (Il2CppRGCTXDataType)3, 14554 },
	{ (Il2CppRGCTXDataType)3, 9124 },
	{ (Il2CppRGCTXDataType)3, 4569 },
	{ (Il2CppRGCTXDataType)3, 5961 },
	{ (Il2CppRGCTXDataType)3, 5960 },
	{ (Il2CppRGCTXDataType)3, 4568 },
	{ (Il2CppRGCTXDataType)3, 8621 },
	{ (Il2CppRGCTXDataType)2, 2651 },
	{ (Il2CppRGCTXDataType)3, 14378 },
	{ (Il2CppRGCTXDataType)3, 16759 },
	{ (Il2CppRGCTXDataType)2, 2664 },
	{ (Il2CppRGCTXDataType)3, 14553 },
	{ (Il2CppRGCTXDataType)3, 5950 },
	{ (Il2CppRGCTXDataType)3, 5951 },
	{ (Il2CppRGCTXDataType)3, 5962 },
	{ (Il2CppRGCTXDataType)3, 134 },
	{ (Il2CppRGCTXDataType)3, 133 },
	{ (Il2CppRGCTXDataType)2, 1479 },
	{ (Il2CppRGCTXDataType)2, 1576 },
	{ (Il2CppRGCTXDataType)3, 5952 },
	{ (Il2CppRGCTXDataType)2, 1497 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)3, 136 },
	{ (Il2CppRGCTXDataType)2, 660 },
	{ (Il2CppRGCTXDataType)2, 712 },
	{ (Il2CppRGCTXDataType)3, 132 },
	{ (Il2CppRGCTXDataType)3, 135 },
	{ (Il2CppRGCTXDataType)3, 79 },
	{ (Il2CppRGCTXDataType)2, 2473 },
	{ (Il2CppRGCTXDataType)3, 12887 },
	{ (Il2CppRGCTXDataType)2, 1475 },
	{ (Il2CppRGCTXDataType)2, 1573 },
	{ (Il2CppRGCTXDataType)3, 12888 },
	{ (Il2CppRGCTXDataType)3, 81 },
	{ (Il2CppRGCTXDataType)2, 523 },
	{ (Il2CppRGCTXDataType)2, 706 },
	{ (Il2CppRGCTXDataType)3, 78 },
	{ (Il2CppRGCTXDataType)3, 80 },
	{ (Il2CppRGCTXDataType)3, 162 },
	{ (Il2CppRGCTXDataType)3, 163 },
	{ (Il2CppRGCTXDataType)2, 2475 },
	{ (Il2CppRGCTXDataType)3, 12889 },
	{ (Il2CppRGCTXDataType)2, 1482 },
	{ (Il2CppRGCTXDataType)2, 1578 },
	{ (Il2CppRGCTXDataType)3, 12890 },
	{ (Il2CppRGCTXDataType)3, 165 },
	{ (Il2CppRGCTXDataType)2, 528 },
	{ (Il2CppRGCTXDataType)2, 715 },
	{ (Il2CppRGCTXDataType)3, 161 },
	{ (Il2CppRGCTXDataType)3, 164 },
	{ (Il2CppRGCTXDataType)3, 119 },
	{ (Il2CppRGCTXDataType)2, 525 },
	{ (Il2CppRGCTXDataType)3, 121 },
	{ (Il2CppRGCTXDataType)2, 710 },
	{ (Il2CppRGCTXDataType)3, 118 },
	{ (Il2CppRGCTXDataType)3, 120 },
	{ (Il2CppRGCTXDataType)2, 3180 },
	{ (Il2CppRGCTXDataType)2, 1024 },
	{ (Il2CppRGCTXDataType)3, 5463 },
	{ (Il2CppRGCTXDataType)2, 1110 },
	{ (Il2CppRGCTXDataType)2, 3244 },
	{ (Il2CppRGCTXDataType)3, 12884 },
	{ (Il2CppRGCTXDataType)3, 12885 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)3, 12886 },
	{ (Il2CppRGCTXDataType)2, 471 },
	{ (Il2CppRGCTXDataType)2, 707 },
	{ (Il2CppRGCTXDataType)3, 91 },
	{ (Il2CppRGCTXDataType)3, 12327 },
	{ (Il2CppRGCTXDataType)2, 2378 },
	{ (Il2CppRGCTXDataType)3, 12340 },
	{ (Il2CppRGCTXDataType)2, 831 },
	{ (Il2CppRGCTXDataType)3, 920 },
	{ (Il2CppRGCTXDataType)3, 12333 },
	{ (Il2CppRGCTXDataType)3, 4540 },
	{ (Il2CppRGCTXDataType)2, 555 },
	{ (Il2CppRGCTXDataType)3, 12328 },
	{ (Il2CppRGCTXDataType)2, 2374 },
	{ (Il2CppRGCTXDataType)3, 1328 },
	{ (Il2CppRGCTXDataType)2, 848 },
	{ (Il2CppRGCTXDataType)2, 1065 },
	{ (Il2CppRGCTXDataType)3, 4546 },
	{ (Il2CppRGCTXDataType)3, 12329 },
	{ (Il2CppRGCTXDataType)3, 4535 },
	{ (Il2CppRGCTXDataType)3, 4536 },
	{ (Il2CppRGCTXDataType)3, 4534 },
	{ (Il2CppRGCTXDataType)3, 4537 },
	{ (Il2CppRGCTXDataType)2, 1061 },
	{ (Il2CppRGCTXDataType)2, 3221 },
	{ (Il2CppRGCTXDataType)3, 5948 },
	{ (Il2CppRGCTXDataType)3, 4539 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 4538 },
	{ (Il2CppRGCTXDataType)2, 1323 },
	{ (Il2CppRGCTXDataType)2, 3176 },
	{ (Il2CppRGCTXDataType)2, 1452 },
	{ (Il2CppRGCTXDataType)2, 1554 },
	{ (Il2CppRGCTXDataType)3, 5444 },
	{ (Il2CppRGCTXDataType)2, 1103 },
	{ (Il2CppRGCTXDataType)3, 6573 },
	{ (Il2CppRGCTXDataType)3, 6574 },
	{ (Il2CppRGCTXDataType)3, 6579 },
	{ (Il2CppRGCTXDataType)2, 1657 },
	{ (Il2CppRGCTXDataType)3, 6576 },
	{ (Il2CppRGCTXDataType)3, 17330 },
	{ (Il2CppRGCTXDataType)2, 1068 },
	{ (Il2CppRGCTXDataType)3, 4559 },
	{ (Il2CppRGCTXDataType)1, 1394 },
	{ (Il2CppRGCTXDataType)2, 3186 },
	{ (Il2CppRGCTXDataType)3, 6575 },
	{ (Il2CppRGCTXDataType)1, 3186 },
	{ (Il2CppRGCTXDataType)1, 1657 },
	{ (Il2CppRGCTXDataType)2, 3242 },
	{ (Il2CppRGCTXDataType)2, 3186 },
	{ (Il2CppRGCTXDataType)3, 6580 },
	{ (Il2CppRGCTXDataType)3, 6578 },
	{ (Il2CppRGCTXDataType)3, 6577 },
	{ (Il2CppRGCTXDataType)2, 409 },
	{ (Il2CppRGCTXDataType)3, 4570 },
	{ (Il2CppRGCTXDataType)2, 539 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	173,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	56,
	s_rgctxIndices,
	263,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
