/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <SampleAnalysis/SASerializable.h>

@class SATimestamp, NSString;

@interface SAFanSpeed : NSObject <SASerializable> {

	int _fanSpeed;
	SATimestamp* _timestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SATimestamp * timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) int fanSpeed;                                  //@synthesize fanSpeed=_fanSpeed - In the implementation block
@property (readonly) BOOL fanSpeedIsValid; 
+(id)classDictionaryKey;
+(int)numFans;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA44*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)fanSpeedWithPAStyleSerializedFanSpeed:(const SCD_Struct_SA20*)arg1 ;
-(id)init;
-(SATimestamp *)timestamp;
-(id)initWithTimestamp:(id)arg1 ;
-(id)initEmpty;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)fanSpeedIsValid;
-(int)fanSpeed;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA44*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(SCD_Struct_SA44*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
@end

