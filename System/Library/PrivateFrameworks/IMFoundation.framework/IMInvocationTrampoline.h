/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMInvocationTrampoline : NSObject {

	id _target;

}

@property (retain) id target;              //@synthesize target=_target - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)performInvocation:(id)arg1 ;
@end

