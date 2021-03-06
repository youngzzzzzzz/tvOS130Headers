/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLImageElement, NSString;

@interface TVLHeadToHeadBannerElement : TVLElement {

	TVLImageElement* _backgroundImage;
	TVLImageElement* _leftImage;
	TVLImageElement* _rightImage;
	NSString* _imageSeparatorText;

}

@property (nonatomic,retain) TVLImageElement * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) TVLImageElement * leftImage;                    //@synthesize leftImage=_leftImage - In the implementation block
@property (nonatomic,retain) TVLImageElement * rightImage;                   //@synthesize rightImage=_rightImage - In the implementation block
@property (nonatomic,retain) NSString * imageSeparatorText;                  //@synthesize imageSeparatorText=_imageSeparatorText - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(TVLImageElement *)leftImage;
-(void)setLeftImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)backgroundImage;
-(void)setBackgroundImage:(TVLImageElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setImageSeparatorText:(NSString *)arg1 ;
-(void)setRightImage:(TVLImageElement *)arg1 ;
-(NSString *)imageSeparatorText;
-(TVLImageElement *)rightImage;
@end

