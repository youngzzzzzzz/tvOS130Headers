/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUIPSDLayer : NSObject {

	double _opacity;
	int _blendMode;
	NSString* _name;

}

@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
@end
