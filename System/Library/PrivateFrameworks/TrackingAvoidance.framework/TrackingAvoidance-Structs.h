/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<(anonymous namespace)::ActivityRecord, void *> > > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<(anonymous namespace)::ActivityRecord, void *> > >;

typedef struct _list_node_base<(anonymous namespace)::ActivityRecord, void *> {
	__list_node_base<(anonymous namespace)::ActivityRecord, void *> __prev_;
	__list_node_base<(anonymous namespace)::ActivityRecord, void *> __next_;
} list_node_base<(anonymous namespace)::ActivityRecord, void *>;

typedef struct list<(anonymous namespace)::ActivityRecord, std::__1::allocator<(anonymous namespace)::ActivityRecord> > {
	list_node_base<(anonymous namespace)::ActivityRecord, void *> __end_;
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<(anonymous namespace)::ActivityRecord, void *> > > __size_alloc_;
} list<(anonymous namespace)::ActivityRecord, std::__1::allocator<(anonymous namespace)::ActivityRecord> >;

typedef struct {
	unsigned long long field1;
	double field2;
} SCD_Struct_TA5;

