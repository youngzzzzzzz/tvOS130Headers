/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SAJSONSerialization.h>
#import <SampleAnalysis/SASerializable.h>
#import <SampleAnalysis/SALibraryCache.h>

@class NSUUID, NSArray, NSString;

@interface SASharedCache : NSObject <SAJSONSerialization, SASerializable, SALibraryCache> {

	NSUUID* _uuid;
	NSArray* _binaryLoadInfos;
	unsigned long long _textSegmentsStartAddress;
	unsigned long long _textSegmentsEndAddress;
	unsigned long long _slide;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * binaryLoadInfos;                                  //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) unsigned long long slide;                                 //@synthesize slide=_slide - In the implementation block
@property (readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long textSegmentsStartAddress;              //@synthesize textSegmentsStartAddress=_textSegmentsStartAddress - In the implementation block
@property (readonly) unsigned long long textSegmentsEndAddress;                //@synthesize textSegmentsEndAddress=_textSegmentsEndAddress - In the implementation block
+(void)clearCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)currentSharedCache;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 ;
+(void)addDSCSymData:(id)arg1 ;
+(void)_doSharedCachesWork:(/*^block*/id)arg1 ;
+(void)_doDscSymDirsWork:(/*^block*/id)arg1 ;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 findMappingsIfUnknown:(BOOL)arg3 ;
+(id)dscSymDirs;
+(void)applyBinaryLoadInfos:(id)arg1 sharedCacheUUID:(id)arg2 slide:(unsigned long long)arg3 ;
+(void)addDscSymDir:(id)arg1 ;
+(id)sharedCacheWithUUID:(id)arg1 slide:(unsigned long long)arg2 binaryLoadInfos:(id)arg3 ;
-(NSString *)debugDescription;
-(NSUUID *)uuid;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(unsigned long long)slide;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(NSArray *)binaryLoadInfos;
-(BOOL)matchesUUID:(unsigned char)arg1 slide:(unsigned long long)arg2 ;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;
-(void)setBinaryLoadInfos:(NSArray *)arg1 ;
-(void)_findSharedCacheMappings;
-(id)initWithUUID:(id)arg1 slide:(unsigned long long)arg2 ;
@end

