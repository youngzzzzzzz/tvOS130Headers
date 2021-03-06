/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseComposeHeaderField.h>

@class GKLabel;

@interface GKComposeHeaderField : GKBaseComposeHeaderField {

	GKLabel* _valueLabel;

}

@property (nonatomic,retain) GKLabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(GKLabel *)valueLabel;
-(void)setValueLabel:(GKLabel *)arg1 ;
-(id)valueText;
-(void)setValueText:(id)arg1 ;
-(CGRect)valueFrame;
-(void)setMaxLineCount:(unsigned long long)arg1 ;
@end

