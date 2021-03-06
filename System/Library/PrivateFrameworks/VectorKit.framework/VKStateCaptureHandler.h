/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString;

@interface VKStateCaptureHandler : NSObject {

	NSString* _name;
	unsigned long long _handle;
	function<NSString *()>* _callback;

}
+(os_state_data_s*)stateDataForDictionary:(id)arg1 title:(id)arg2 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 withName:(id)arg2 withCallback:(function<NSString *()>*)arg3 ;
-(void)_registerHandlerforStateCapture:(id)arg1 ;
-(void)_unregisterHandlerforStateCapture;
-(os_state_data_s*)_stateCapture;
@end

