/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVDiagnostics/DADeviceConnectionCommand.h>

@class NSNumber, NSString;

@interface DADeviceConnectionCancelTestCommand : NSObject <DADeviceConnectionCommand> {

	NSNumber* _testID;

}

@property (nonatomic,retain) NSNumber * testID;                     //@synthesize testID=_testID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long commandType; 
-(long long)commandType;
-(void)setTestID:(NSNumber *)arg1 ;
-(NSNumber *)testID;
@end

