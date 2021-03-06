/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSString, NSMutableDictionary;

@interface BWPhotoManifest : NSObject {

	NSArray* _photoDescriptors;
	NSString* _captureRequestIdentifier;
	os_unfair_lock_s _bufferPtrValueToPhotoDescriptorLock;
	NSMutableDictionary* _bufferPtrValueToPhotoDescriptor;

}

@property (nonatomic,readonly) NSArray * photoDescriptors;                       //@synthesize photoDescriptors=_photoDescriptors - In the implementation block
@property (nonatomic,readonly) NSString * captureRequestIdentifier;              //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)captureRequestIdentifier;
-(NSArray *)photoDescriptors;
-(id)descriptorForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithDescriptors:(id)arg1 captureRequestIdentifier:(id)arg2 ;
-(id)descriptorForIdentifier:(id)arg1 ;
@end

