/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOSQLiteDB, GEODefaultsDBDict, geo_isolater;

@interface GEOConfigPersistence : NSObject {

	GEOSQLiteDB* _db;
	GEODefaultsDBDict* _cache;
	geo_isolater* _cacheIsolator;

}
+(id)shared;
+(BOOL)_setup:(id)arg1 ;
-(void)dealloc;
-(void)tearDown;
-(id)initWithDBPath:(id)arg1 ;
-(id)_valueForKeyPath:(id)arg1 key:(id*)arg2 createOrUpdate:(/*^block*/id)arg3 ;
-(void)setDefault:(id)arg1 forKeyPath:(id)arg2 ;
-(id)defaultForKeyPath:(id)arg1 ;
@end

