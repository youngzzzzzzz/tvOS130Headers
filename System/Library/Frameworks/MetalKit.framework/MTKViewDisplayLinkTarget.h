/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject {

	MTKView* _target;

}

@property (assign,nonatomic,__weak) MTKView * target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(MTKView *)arg1 ;
-(MTKView *)target;
-(id)initWithTarget:(id)arg1 ;
-(void)draw;
@end

