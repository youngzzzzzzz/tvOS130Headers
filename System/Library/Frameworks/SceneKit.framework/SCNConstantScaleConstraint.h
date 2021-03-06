/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNConstantScaleConstraint : SCNConstraint {

	float _scale;
	BOOL _screenSpace;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) BOOL screenSpace; 
+(BOOL)supportsSecureCoding;
+(id)constantScaleConstraint;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
@end

