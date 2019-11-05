/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/XPCServices/com.apple.datamigrator.xpc/com.apple.datamigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DMPluginFileSystemRep;

@interface DataMigrationPlugin : NSObject {

	NSString* _identifier;
	DMPluginFileSystemRep* _rep;
	NSString* _additionalDescription;
	BOOL _isUserAgnostic;
	BOOL _didRun;
	BOOL _success;
	float _timeEstimate;
	double _timeout;
	double _runDuration;

}

@property (nonatomic,readonly) BOOL existsAndShouldRun; 
@property (nonatomic,readonly) BOOL isUserAgnostic;                      //@synthesize isUserAgnostic=_isUserAgnostic - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) DMPluginFileSystemRep * rep;              //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) float timeEstimate;                         //@synthesize timeEstimate=_timeEstimate - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) BOOL didRun;                              //@synthesize didRun=_didRun - In the implementation block
@property (nonatomic,readonly) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) double runDuration;                       //@synthesize runDuration=_runDuration - In the implementation block
+(BOOL)_shouldWatchdogPluginsAfterTimeout;
-(id)description;
-(NSString *)identifier;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(BOOL)success;
-(BOOL)existsAndShouldRun;
-(DMPluginFileSystemRep *)rep;
-(id)initWithIdentifier:(id)arg1 fileSystemRep:(id)arg2 isUserAgnostic:(BOOL)arg3 ;
-(void)setTimeEstimate:(float)arg1 ;
-(float)timeEstimate;
-(id)performMigrationWithContext:(id)arg1 countOfAttempts:(out unsigned long long*)arg2 ;
-(BOOL)isUserAgnostic;
-(id)_performOneMigrationWithContext:(id)arg1 needsRetry:(BOOL*)arg2 ;
-(BOOL)didRun;
-(double)runDuration;
@end
