/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, ACCStatInfoAccumulator;

@interface ACCMemUsageStatInfo : NSObject {

	NSString* _name;
	NSDate* _startTime;
	NSDate* _lastUpdateTime;
	ACCStatInfoAccumulator* _residentMem;
	ACCStatInfoAccumulator* _virtualMem;
	ACCStatInfoAccumulator* _physFootprintMem;

}

@property (nonatomic,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                                //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,readonly) ACCStatInfoAccumulator * residentMem;                   //@synthesize residentMem=_residentMem - In the implementation block
@property (nonatomic,readonly) ACCStatInfoAccumulator * virtualMem;                    //@synthesize virtualMem=_virtualMem - In the implementation block
@property (nonatomic,readonly) ACCStatInfoAccumulator * physFootprintMem;              //@synthesize physFootprintMem=_physFootprintMem - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(NSDate *)startTime;
-(void)setInfo:(id)arg1 ;
-(NSDate *)lastUpdateTime;
-(double)timeIntervalSinceStart;
-(double)timeIntervalSinceLastUpdate;
-(ACCStatInfoAccumulator *)residentMem;
-(ACCStatInfoAccumulator *)virtualMem;
-(ACCStatInfoAccumulator *)physFootprintMem;
-(id)initWithName:(id)arg1 andInfo:(id)arg2 ;
-(void)updateResident:(unsigned long long)arg1 virtualValue:(unsigned long long)arg2 physFootprintValue:(unsigned long long)arg3 ;
@end
