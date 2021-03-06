/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <demod/MSDDemoUpdateStatusDelegate.h>

@class NSMutableSet, NSString;

@interface MSDDemoUpdateStatusHub : NSObject <MSDDemoUpdateStatusDelegate> {

	NSMutableSet* _delegates;

}

@property (retain) NSMutableSet * delegates;                        //@synthesize delegates=_delegates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(void)demoUpdateFailed:(id)arg1 ;
-(BOOL)registerDemoUpdateStatusDelegate:(id)arg1 ;
-(void)demoUpdateCompleted:(id)arg1 ;
-(void)unregisterDemoUpdateStatusDelegate:(id)arg1 ;
-(void)demoUpdateProgress:(id)arg1 ;
@end

