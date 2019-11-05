/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(double)displayScale;
-(id)_borderView;
-(void)setDisplayScale:(double)arg1 ;
-(id)imageForBorderConfiguration:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
@end
