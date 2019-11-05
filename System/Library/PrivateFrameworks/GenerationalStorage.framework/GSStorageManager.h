/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GenerationalStorage/GenerationalStorage-Structs.h>
@interface GSStorageManager : NSObject
+(void)initialize;
+(id)manager;
+(BOOL)_isPermanentStorageSupportedForStatFSInfo:(statfs*)arg1 error:(id*)arg2 ;
+(BOOL)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2 ;
-(id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(BOOL)arg2 error:(id*)arg3 ;
-(id)persistentIdentifierInStorage:(NSObject*)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3 ;
-(BOOL)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2 ;
-(id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3 ;
-(id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeTemporaryStorage:(id)arg1 error:(id*)arg2 ;
-(void)_connectionWithDaemonWasLost;
-(id)stagingPrefixForDocumentID:(id)arg1 ;
-(BOOL)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
-(BOOL)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id*)arg2 ;
@end
