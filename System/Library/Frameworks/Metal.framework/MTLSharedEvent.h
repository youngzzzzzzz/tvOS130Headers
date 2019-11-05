/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLSharedEvent <MTLEvent>
@property (assign) unsigned long long signaledValue; 
@required
-(void)setSignaledValue:(unsigned long long)arg1;
-(unsigned long long)signaledValue;
-(void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(/*^block*/id)arg3;
-(id)newSharedEventHandle;

@end
