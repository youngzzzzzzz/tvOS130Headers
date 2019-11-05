/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface KPersistentMovieInfo : NSObject
+(long long)cacheCount;
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(void)ensureCacheDirectoryExists;
+(id)cachedCreationDateForURL:(id)arg1 ;
+(void)addURL:(id)arg1 withDate:(id)arg2 ;
+(id)infoCachePath;
+(void)reallySaveDict:(id)arg1 ;
+(void)createOrLoadPersistentDict;
+(void)savePersistentDict;
@end
