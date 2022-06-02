#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000006 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000010 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000013 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x00000016 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000001E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000025 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000026 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000029 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002A System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002E System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000030 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000032 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000051 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000052 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000053 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000056 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000059 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000005F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000060 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000061 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000062 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000063 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000064 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000065 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000066 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000068 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x00000069 System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000006A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000006B TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000006C System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000006D System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000006E System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000006F System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000070 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000071 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000072 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000073 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000074 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000075 System.Void System.Linq.Set`1::Resize()
// 0x00000076 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000077 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000078 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000079 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007A System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007B System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000007C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000007D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000007E System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000007F TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000080 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000081 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000082 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000083 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000084 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000085 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000086 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000087 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000088 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000089 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000008A System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000008B System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000008C System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000008D TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000090 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
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
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000A4 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A7 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A9 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000AA System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000AB System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000AC System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000AD System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000AE System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000AF System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000B0 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000B1 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[178] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
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
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[178] = 
{
	5854,
	5854,
	6066,
	6066,
	6066,
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
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[60] = 
{
	{ 0x02000004, { 99, 4 } },
	{ 0x02000005, { 103, 9 } },
	{ 0x02000006, { 114, 7 } },
	{ 0x02000007, { 123, 10 } },
	{ 0x02000008, { 135, 11 } },
	{ 0x02000009, { 149, 9 } },
	{ 0x0200000A, { 161, 12 } },
	{ 0x0200000B, { 176, 1 } },
	{ 0x0200000C, { 177, 2 } },
	{ 0x0200000D, { 179, 12 } },
	{ 0x0200000E, { 191, 11 } },
	{ 0x0200000F, { 202, 6 } },
	{ 0x02000010, { 208, 2 } },
	{ 0x02000012, { 210, 8 } },
	{ 0x02000014, { 218, 3 } },
	{ 0x02000015, { 223, 5 } },
	{ 0x02000016, { 228, 7 } },
	{ 0x02000017, { 235, 3 } },
	{ 0x02000018, { 238, 7 } },
	{ 0x02000019, { 245, 4 } },
	{ 0x0200001A, { 249, 34 } },
	{ 0x0200001C, { 283, 2 } },
	{ 0x06000006, { 0, 10 } },
	{ 0x06000007, { 10, 10 } },
	{ 0x06000008, { 20, 5 } },
	{ 0x06000009, { 25, 5 } },
	{ 0x0600000A, { 30, 1 } },
	{ 0x0600000B, { 31, 2 } },
	{ 0x0600000C, { 33, 2 } },
	{ 0x0600000D, { 35, 1 } },
	{ 0x0600000E, { 36, 1 } },
	{ 0x0600000F, { 37, 2 } },
	{ 0x06000010, { 39, 3 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 7 } },
	{ 0x06000014, { 52, 1 } },
	{ 0x06000015, { 53, 2 } },
	{ 0x06000016, { 55, 4 } },
	{ 0x06000017, { 59, 3 } },
	{ 0x06000018, { 62, 4 } },
	{ 0x06000019, { 66, 3 } },
	{ 0x0600001A, { 69, 4 } },
	{ 0x0600001B, { 73, 3 } },
	{ 0x0600001C, { 76, 3 } },
	{ 0x0600001D, { 79, 1 } },
	{ 0x0600001E, { 80, 1 } },
	{ 0x0600001F, { 81, 3 } },
	{ 0x06000020, { 84, 3 } },
	{ 0x06000021, { 87, 2 } },
	{ 0x06000022, { 89, 3 } },
	{ 0x06000023, { 92, 2 } },
	{ 0x06000024, { 94, 5 } },
	{ 0x06000034, { 112, 2 } },
	{ 0x06000039, { 121, 2 } },
	{ 0x0600003E, { 133, 2 } },
	{ 0x06000044, { 146, 3 } },
	{ 0x06000049, { 158, 3 } },
	{ 0x0600004E, { 173, 3 } },
	{ 0x0600007A, { 221, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[285] = 
{
	{ (Il2CppRGCTXDataType)2, 2683 },
	{ (Il2CppRGCTXDataType)3, 12013 },
	{ (Il2CppRGCTXDataType)2, 4444 },
	{ (Il2CppRGCTXDataType)2, 3825 },
	{ (Il2CppRGCTXDataType)3, 24139 },
	{ (Il2CppRGCTXDataType)2, 2822 },
	{ (Il2CppRGCTXDataType)2, 3832 },
	{ (Il2CppRGCTXDataType)3, 24204 },
	{ (Il2CppRGCTXDataType)2, 3827 },
	{ (Il2CppRGCTXDataType)3, 24155 },
	{ (Il2CppRGCTXDataType)2, 2684 },
	{ (Il2CppRGCTXDataType)3, 12014 },
	{ (Il2CppRGCTXDataType)2, 4479 },
	{ (Il2CppRGCTXDataType)2, 3834 },
	{ (Il2CppRGCTXDataType)3, 24220 },
	{ (Il2CppRGCTXDataType)2, 2846 },
	{ (Il2CppRGCTXDataType)2, 3842 },
	{ (Il2CppRGCTXDataType)3, 24400 },
	{ (Il2CppRGCTXDataType)2, 3838 },
	{ (Il2CppRGCTXDataType)3, 24302 },
	{ (Il2CppRGCTXDataType)2, 915 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1667 },
	{ (Il2CppRGCTXDataType)3, 8621 },
	{ (Il2CppRGCTXDataType)2, 916 },
	{ (Il2CppRGCTXDataType)3, 86 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)2, 1685 },
	{ (Il2CppRGCTXDataType)3, 8631 },
	{ (Il2CppRGCTXDataType)3, 28359 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)3, 179 },
	{ (Il2CppRGCTXDataType)2, 3425 },
	{ (Il2CppRGCTXDataType)3, 19727 },
	{ (Il2CppRGCTXDataType)3, 9540 },
	{ (Il2CppRGCTXDataType)3, 28296 },
	{ (Il2CppRGCTXDataType)2, 917 },
	{ (Il2CppRGCTXDataType)3, 126 },
	{ (Il2CppRGCTXDataType)2, 1107 },
	{ (Il2CppRGCTXDataType)3, 1704 },
	{ (Il2CppRGCTXDataType)3, 1705 },
	{ (Il2CppRGCTXDataType)2, 2823 },
	{ (Il2CppRGCTXDataType)3, 12958 },
	{ (Il2CppRGCTXDataType)3, 28390 },
	{ (Il2CppRGCTXDataType)2, 1239 },
	{ (Il2CppRGCTXDataType)3, 2613 },
	{ (Il2CppRGCTXDataType)2, 2061 },
	{ (Il2CppRGCTXDataType)2, 2180 },
	{ (Il2CppRGCTXDataType)3, 8629 },
	{ (Il2CppRGCTXDataType)3, 8630 },
	{ (Il2CppRGCTXDataType)3, 2614 },
	{ (Il2CppRGCTXDataType)3, 28320 },
	{ (Il2CppRGCTXDataType)2, 921 },
	{ (Il2CppRGCTXDataType)3, 154 },
	{ (Il2CppRGCTXDataType)2, 2480 },
	{ (Il2CppRGCTXDataType)2, 1913 },
	{ (Il2CppRGCTXDataType)2, 2040 },
	{ (Il2CppRGCTXDataType)2, 2172 },
	{ (Il2CppRGCTXDataType)2, 2041 },
	{ (Il2CppRGCTXDataType)2, 2173 },
	{ (Il2CppRGCTXDataType)3, 8623 },
	{ (Il2CppRGCTXDataType)2, 2481 },
	{ (Il2CppRGCTXDataType)2, 1914 },
	{ (Il2CppRGCTXDataType)2, 2042 },
	{ (Il2CppRGCTXDataType)2, 2174 },
	{ (Il2CppRGCTXDataType)2, 2043 },
	{ (Il2CppRGCTXDataType)2, 2175 },
	{ (Il2CppRGCTXDataType)3, 8624 },
	{ (Il2CppRGCTXDataType)2, 2482 },
	{ (Il2CppRGCTXDataType)2, 1915 },
	{ (Il2CppRGCTXDataType)2, 2044 },
	{ (Il2CppRGCTXDataType)2, 2176 },
	{ (Il2CppRGCTXDataType)2, 2045 },
	{ (Il2CppRGCTXDataType)2, 2177 },
	{ (Il2CppRGCTXDataType)3, 8625 },
	{ (Il2CppRGCTXDataType)2, 2479 },
	{ (Il2CppRGCTXDataType)2, 2039 },
	{ (Il2CppRGCTXDataType)2, 2171 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)2, 2026 },
	{ (Il2CppRGCTXDataType)2, 2027 },
	{ (Il2CppRGCTXDataType)2, 2168 },
	{ (Il2CppRGCTXDataType)3, 8620 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)2, 2167 },
	{ (Il2CppRGCTXDataType)3, 8619 },
	{ (Il2CppRGCTXDataType)2, 1912 },
	{ (Il2CppRGCTXDataType)2, 2037 },
	{ (Il2CppRGCTXDataType)2, 2038 },
	{ (Il2CppRGCTXDataType)2, 2170 },
	{ (Il2CppRGCTXDataType)3, 8622 },
	{ (Il2CppRGCTXDataType)2, 1911 },
	{ (Il2CppRGCTXDataType)3, 28269 },
	{ (Il2CppRGCTXDataType)3, 7681 },
	{ (Il2CppRGCTXDataType)2, 1530 },
	{ (Il2CppRGCTXDataType)2, 2029 },
	{ (Il2CppRGCTXDataType)2, 2169 },
	{ (Il2CppRGCTXDataType)2, 2287 },
	{ (Il2CppRGCTXDataType)3, 12015 },
	{ (Il2CppRGCTXDataType)3, 12017 },
	{ (Il2CppRGCTXDataType)2, 674 },
	{ (Il2CppRGCTXDataType)3, 12016 },
	{ (Il2CppRGCTXDataType)3, 12025 },
	{ (Il2CppRGCTXDataType)2, 2687 },
	{ (Il2CppRGCTXDataType)2, 3828 },
	{ (Il2CppRGCTXDataType)3, 24156 },
	{ (Il2CppRGCTXDataType)3, 12026 },
	{ (Il2CppRGCTXDataType)2, 2098 },
	{ (Il2CppRGCTXDataType)2, 2211 },
	{ (Il2CppRGCTXDataType)3, 8639 },
	{ (Il2CppRGCTXDataType)3, 28232 },
	{ (Il2CppRGCTXDataType)2, 3839 },
	{ (Il2CppRGCTXDataType)3, 24303 },
	{ (Il2CppRGCTXDataType)3, 12018 },
	{ (Il2CppRGCTXDataType)2, 2686 },
	{ (Il2CppRGCTXDataType)2, 3826 },
	{ (Il2CppRGCTXDataType)3, 24140 },
	{ (Il2CppRGCTXDataType)3, 8638 },
	{ (Il2CppRGCTXDataType)3, 12019 },
	{ (Il2CppRGCTXDataType)3, 28231 },
	{ (Il2CppRGCTXDataType)2, 3835 },
	{ (Il2CppRGCTXDataType)3, 24221 },
	{ (Il2CppRGCTXDataType)3, 12032 },
	{ (Il2CppRGCTXDataType)2, 2688 },
	{ (Il2CppRGCTXDataType)2, 3833 },
	{ (Il2CppRGCTXDataType)3, 24205 },
	{ (Il2CppRGCTXDataType)3, 13031 },
	{ (Il2CppRGCTXDataType)3, 5998 },
	{ (Il2CppRGCTXDataType)3, 8640 },
	{ (Il2CppRGCTXDataType)3, 5997 },
	{ (Il2CppRGCTXDataType)3, 12033 },
	{ (Il2CppRGCTXDataType)3, 28233 },
	{ (Il2CppRGCTXDataType)2, 3843 },
	{ (Il2CppRGCTXDataType)3, 24401 },
	{ (Il2CppRGCTXDataType)3, 12046 },
	{ (Il2CppRGCTXDataType)2, 2690 },
	{ (Il2CppRGCTXDataType)2, 3841 },
	{ (Il2CppRGCTXDataType)3, 24305 },
	{ (Il2CppRGCTXDataType)3, 12047 },
	{ (Il2CppRGCTXDataType)2, 2101 },
	{ (Il2CppRGCTXDataType)2, 2214 },
	{ (Il2CppRGCTXDataType)3, 8644 },
	{ (Il2CppRGCTXDataType)3, 8643 },
	{ (Il2CppRGCTXDataType)2, 3830 },
	{ (Il2CppRGCTXDataType)3, 24158 },
	{ (Il2CppRGCTXDataType)3, 28243 },
	{ (Il2CppRGCTXDataType)2, 3840 },
	{ (Il2CppRGCTXDataType)3, 24304 },
	{ (Il2CppRGCTXDataType)3, 12039 },
	{ (Il2CppRGCTXDataType)2, 2689 },
	{ (Il2CppRGCTXDataType)2, 3837 },
	{ (Il2CppRGCTXDataType)3, 24223 },
	{ (Il2CppRGCTXDataType)3, 8642 },
	{ (Il2CppRGCTXDataType)3, 8641 },
	{ (Il2CppRGCTXDataType)3, 12040 },
	{ (Il2CppRGCTXDataType)2, 3829 },
	{ (Il2CppRGCTXDataType)3, 24157 },
	{ (Il2CppRGCTXDataType)3, 28242 },
	{ (Il2CppRGCTXDataType)2, 3836 },
	{ (Il2CppRGCTXDataType)3, 24222 },
	{ (Il2CppRGCTXDataType)3, 12053 },
	{ (Il2CppRGCTXDataType)2, 2691 },
	{ (Il2CppRGCTXDataType)2, 3845 },
	{ (Il2CppRGCTXDataType)3, 24403 },
	{ (Il2CppRGCTXDataType)3, 13032 },
	{ (Il2CppRGCTXDataType)3, 6000 },
	{ (Il2CppRGCTXDataType)3, 8646 },
	{ (Il2CppRGCTXDataType)3, 8645 },
	{ (Il2CppRGCTXDataType)3, 5999 },
	{ (Il2CppRGCTXDataType)3, 12054 },
	{ (Il2CppRGCTXDataType)2, 3831 },
	{ (Il2CppRGCTXDataType)3, 24159 },
	{ (Il2CppRGCTXDataType)3, 28244 },
	{ (Il2CppRGCTXDataType)2, 3844 },
	{ (Il2CppRGCTXDataType)3, 24402 },
	{ (Il2CppRGCTXDataType)3, 8635 },
	{ (Il2CppRGCTXDataType)3, 8636 },
	{ (Il2CppRGCTXDataType)3, 8647 },
	{ (Il2CppRGCTXDataType)3, 182 },
	{ (Il2CppRGCTXDataType)3, 181 },
	{ (Il2CppRGCTXDataType)2, 2093 },
	{ (Il2CppRGCTXDataType)2, 2207 },
	{ (Il2CppRGCTXDataType)3, 8637 },
	{ (Il2CppRGCTXDataType)2, 2107 },
	{ (Il2CppRGCTXDataType)2, 2229 },
	{ (Il2CppRGCTXDataType)3, 184 },
	{ (Il2CppRGCTXDataType)2, 838 },
	{ (Il2CppRGCTXDataType)2, 926 },
	{ (Il2CppRGCTXDataType)3, 180 },
	{ (Il2CppRGCTXDataType)3, 183 },
	{ (Il2CppRGCTXDataType)3, 128 },
	{ (Il2CppRGCTXDataType)2, 3601 },
	{ (Il2CppRGCTXDataType)3, 22752 },
	{ (Il2CppRGCTXDataType)2, 2089 },
	{ (Il2CppRGCTXDataType)2, 2204 },
	{ (Il2CppRGCTXDataType)3, 22753 },
	{ (Il2CppRGCTXDataType)3, 130 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)2, 918 },
	{ (Il2CppRGCTXDataType)3, 127 },
	{ (Il2CppRGCTXDataType)3, 129 },
	{ (Il2CppRGCTXDataType)3, 156 },
	{ (Il2CppRGCTXDataType)2, 671 },
	{ (Il2CppRGCTXDataType)3, 158 },
	{ (Il2CppRGCTXDataType)2, 922 },
	{ (Il2CppRGCTXDataType)3, 155 },
	{ (Il2CppRGCTXDataType)3, 157 },
	{ (Il2CppRGCTXDataType)2, 4491 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)3, 7716 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)2, 4588 },
	{ (Il2CppRGCTXDataType)3, 22749 },
	{ (Il2CppRGCTXDataType)3, 22750 },
	{ (Il2CppRGCTXDataType)2, 2302 },
	{ (Il2CppRGCTXDataType)3, 22751 },
	{ (Il2CppRGCTXDataType)2, 600 },
	{ (Il2CppRGCTXDataType)2, 919 },
	{ (Il2CppRGCTXDataType)3, 140 },
	{ (Il2CppRGCTXDataType)3, 19712 },
	{ (Il2CppRGCTXDataType)2, 3426 },
	{ (Il2CppRGCTXDataType)3, 19728 },
	{ (Il2CppRGCTXDataType)2, 1108 },
	{ (Il2CppRGCTXDataType)3, 1706 },
	{ (Il2CppRGCTXDataType)3, 19718 },
	{ (Il2CppRGCTXDataType)3, 5967 },
	{ (Il2CppRGCTXDataType)2, 713 },
	{ (Il2CppRGCTXDataType)3, 19713 },
	{ (Il2CppRGCTXDataType)2, 3422 },
	{ (Il2CppRGCTXDataType)3, 1748 },
	{ (Il2CppRGCTXDataType)2, 1122 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)3, 5973 },
	{ (Il2CppRGCTXDataType)3, 19714 },
	{ (Il2CppRGCTXDataType)3, 5962 },
	{ (Il2CppRGCTXDataType)3, 5963 },
	{ (Il2CppRGCTXDataType)3, 5961 },
	{ (Il2CppRGCTXDataType)3, 5964 },
	{ (Il2CppRGCTXDataType)2, 1486 },
	{ (Il2CppRGCTXDataType)2, 4541 },
	{ (Il2CppRGCTXDataType)3, 8633 },
	{ (Il2CppRGCTXDataType)3, 5966 },
	{ (Il2CppRGCTXDataType)2, 2006 },
	{ (Il2CppRGCTXDataType)3, 5965 },
	{ (Il2CppRGCTXDataType)2, 1917 },
	{ (Il2CppRGCTXDataType)2, 4483 },
	{ (Il2CppRGCTXDataType)2, 2062 },
	{ (Il2CppRGCTXDataType)2, 2181 },
	{ (Il2CppRGCTXDataType)3, 7697 },
	{ (Il2CppRGCTXDataType)2, 1538 },
	{ (Il2CppRGCTXDataType)3, 9283 },
	{ (Il2CppRGCTXDataType)3, 9284 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)3, 9287 },
	{ (Il2CppRGCTXDataType)2, 1876 },
	{ (Il2CppRGCTXDataType)3, 9288 },
	{ (Il2CppRGCTXDataType)2, 1918 },
	{ (Il2CppRGCTXDataType)3, 9292 },
	{ (Il2CppRGCTXDataType)3, 9296 },
	{ (Il2CppRGCTXDataType)3, 9295 },
	{ (Il2CppRGCTXDataType)2, 4586 },
	{ (Il2CppRGCTXDataType)3, 9286 },
	{ (Il2CppRGCTXDataType)3, 9285 },
	{ (Il2CppRGCTXDataType)3, 9293 },
	{ (Il2CppRGCTXDataType)2, 2296 },
	{ (Il2CppRGCTXDataType)3, 9290 },
	{ (Il2CppRGCTXDataType)3, 29117 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)3, 5988 },
	{ (Il2CppRGCTXDataType)1, 2001 },
	{ (Il2CppRGCTXDataType)2, 4499 },
	{ (Il2CppRGCTXDataType)3, 9289 },
	{ (Il2CppRGCTXDataType)1, 4499 },
	{ (Il2CppRGCTXDataType)1, 2296 },
	{ (Il2CppRGCTXDataType)2, 4586 },
	{ (Il2CppRGCTXDataType)2, 4499 },
	{ (Il2CppRGCTXDataType)2, 2064 },
	{ (Il2CppRGCTXDataType)2, 2183 },
	{ (Il2CppRGCTXDataType)3, 9294 },
	{ (Il2CppRGCTXDataType)3, 9291 },
	{ (Il2CppRGCTXDataType)3, 9297 },
	{ (Il2CppRGCTXDataType)2, 520 },
	{ (Il2CppRGCTXDataType)3, 6001 },
	{ (Il2CppRGCTXDataType)2, 687 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	178,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	60,
	s_rgctxIndices,
	285,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
