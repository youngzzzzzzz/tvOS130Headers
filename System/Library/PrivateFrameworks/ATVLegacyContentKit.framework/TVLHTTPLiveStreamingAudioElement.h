/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLAudioAssetElement.h>

@class NSDate;

@interface TVLHTTPLiveStreamingAudioElement : TVLAudioAssetElement {

	BOOL _indefiniteDuration;
	BOOL _beginPlaybackAtStartDate;
	NSDate* _startDate;

}

@property (assign,nonatomic) BOOL indefiniteDuration;                    //@synthesize indefiniteDuration=_indefiniteDuration - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL beginPlaybackAtStartDate;              //@synthesize beginPlaybackAtStartDate=_beginPlaybackAtStartDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)beginPlaybackAtStartDate;
-(void)setBeginPlaybackAtStartDate:(BOOL)arg1 ;
-(void)setIndefiniteDuration:(BOOL)arg1 ;
-(BOOL)indefiniteDuration;
@end
