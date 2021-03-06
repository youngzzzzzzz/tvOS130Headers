/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSSecureCoding.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding> {

	C3DTimingFunctionRef _timingFunction;

}
+(BOOL)supportsSecureCoding;
+(id)functionWithTimingMode:(long long)arg1 ;
+(id)functionWithCAMediaTimingFunction:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimingFunctionRef:(C3DTimingFunctionRef)arg1 ;
-(C3DTimingFunctionRef)c3dTimingFunction;
@end

