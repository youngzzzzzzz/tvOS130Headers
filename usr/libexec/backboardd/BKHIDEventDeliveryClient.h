/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKEventClient.h>

@class NSArray, NSSet;

@interface BKHIDEventDeliveryClient : BKEventClient {

	NSArray* _deliveryRoots;
	NSArray* _keyCommandDeliveryRoots;
	NSArray* _deferringRules;
	NSSet* _keyCommandsRegistrations;
	NSSet* _resolutions;

}

@property (nonatomic,retain) NSArray * deliveryRoots;                        //@synthesize deliveryRoots=_deliveryRoots - In the implementation block
@property (nonatomic,retain) NSArray * keyCommandDeliveryRoots;              //@synthesize keyCommandDeliveryRoots=_keyCommandDeliveryRoots - In the implementation block
@property (nonatomic,retain) NSArray * deferringRules;                       //@synthesize deferringRules=_deferringRules - In the implementation block
@property (nonatomic,retain) NSSet * keyCommandsRegistrations;               //@synthesize keyCommandsRegistrations=_keyCommandsRegistrations - In the implementation block
@property (nonatomic,retain) NSSet * resolutions;                            //@synthesize resolutions=_resolutions - In the implementation block
-(void)setDeferringRules:(NSArray *)arg1 ;
-(void)setKeyCommandsRegistrations:(NSSet *)arg1 ;
-(NSSet *)resolutions;
-(void)setResolutions:(NSSet *)arg1 ;
-(NSArray *)deliveryRoots;
-(void)setDeliveryRoots:(NSArray *)arg1 ;
-(NSArray *)keyCommandDeliveryRoots;
-(void)setKeyCommandDeliveryRoots:(NSArray *)arg1 ;
-(NSArray *)deferringRules;
-(NSSet *)keyCommandsRegistrations;
@end
