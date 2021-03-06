/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVDiagnostics/TVDiagnostics-Structs.h>
#import <TVDiagnostics/NSCopying.h>
#import <TVDiagnostics/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDictionary, NSData, NSNumber, DASessionSettings, NSArray;

@interface DADeviceState : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _pendingChanges;
	BOOL _freezeNotifications;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	long long _phase;
	NSString* _serialNumber;
	NSDictionary* _attributes;
	NSString* _suiteName;
	NSString* _suiteDescription;
	NSData* _testSuiteImageData;
	NSNumber* _progress;
	double _durationRemaining;
	DASessionSettings* _sessionSettings;
	NSArray* _history;
	NSArray* _errors;
	NSNumber* _timestamp;

}

@property (assign,nonatomic) long long phase;                                  //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                      //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * suiteName;                             //@synthesize suiteName=_suiteName - In the implementation block
@property (nonatomic,retain) NSString * suiteDescription;                      //@synthesize suiteDescription=_suiteDescription - In the implementation block
@property (nonatomic,retain) NSData * testSuiteImageData;                      //@synthesize testSuiteImageData=_testSuiteImageData - In the implementation block
@property (nonatomic,retain) NSNumber * progress;                              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double durationRemaining;                         //@synthesize durationRemaining=_durationRemaining - In the implementation block
@property (nonatomic,retain) DASessionSettings * sessionSettings;              //@synthesize sessionSettings=_sessionSettings - In the implementation block
@property (nonatomic,retain) NSArray * history;                                //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) NSArray * errors;                                 //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)progress;
-(void)setProgress:(NSNumber *)arg1 ;
-(NSDictionary *)attributes;
-(NSNumber *)timestamp;
-(NSArray *)errors;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)serialNumber;
-(void)setErrors:(NSArray *)arg1 ;
-(void)resetState;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(NSArray *)history;
-(void)_sendChangeNotification;
-(void)setHistory:(NSArray *)arg1 ;
-(NSString *)suiteName;
-(void)setSuiteName:(NSString *)arg1 ;
-(BOOL)object:(id)arg1 isEqualToObject:(id)arg2 ;
-(void)transactionWithBlock:(/*^block*/id)arg1 ;
-(double)durationRemaining;
-(void)updateWithDeviceState:(id)arg1 ;
-(id)initWithSerialNumber:(id)arg1 attributes:(id)arg2 ;
-(NSString *)suiteDescription;
-(DASessionSettings *)sessionSettings;
-(void)_sendChangeNotificationIfNeeded;
-(void)setSuiteDescription:(NSString *)arg1 ;
-(void)setDurationRemaining:(double)arg1 ;
-(void)setSessionSettings:(DASessionSettings *)arg1 ;
-(void)removeErrorCodes:(id)arg1 ;
-(id)_stringForPhase:(long long)arg1 ;
-(void)addErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)removeErrorCode:(long long)arg1 ;
-(NSData *)testSuiteImageData;
-(void)setTestSuiteImageData:(NSData *)arg1 ;
@end

