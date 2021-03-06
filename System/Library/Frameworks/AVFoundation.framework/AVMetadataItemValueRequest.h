/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVMetadataItemValueRequestInternal, AVMetadataItem;

@interface AVMetadataItemValueRequest : NSObject {

	AVMetadataItemValueRequestInternal* _valueRequest;

}

@property (__weak,readonly) AVMetadataItem * metadataItem; 
+(id)metadataItemValueRequestWithMetadataItem:(id)arg1 ;
-(void)dealloc;
-(id)error;
-(id)value;
-(id)dataType;
-(AVMetadataItem *)metadataItem;
-(id)initWithMetadataItem:(id)arg1 ;
-(void)respondWithValue:(id)arg1 dataType:(id)arg2 ;
-(void)respondWithValue:(id)arg1 ;
-(void)respondWithError:(id)arg1 ;
@end

