/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMObjectMerge.h>
#import <HomeKit/NSSecureCoding.h>
#import <HomeKit/NSCopying.h>

@class HMFUnfairLock, NSUUID, HMActionSet, _HMContext, NSString;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	HMActionSet* _actionSet;
	_HMContext* _context;
	unsigned long long _type;

}

@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (copy) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMActionSet * actionSet;                                 //@synthesize actionSet=_actionSet - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) BOOL requiresDeviceUnlock; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)_invalidate;
-(unsigned long long)type;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)actionType;
-(BOOL)_handleUpdates:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(HMActionSet *)actionSet;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
@end
