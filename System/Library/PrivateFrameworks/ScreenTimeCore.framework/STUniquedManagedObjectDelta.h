/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface STUniquedManagedObjectDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSMutableSet* _updatedProperties;

}

@property (nonatomic,retain) NSMutableSet * updatedProperties;                //@synthesize updatedProperties=_updatedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(NSString *)uniqueIdentifier;
-(long long)changeType;
-(NSMutableSet *)updatedProperties;
-(void)deleted;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)inserted;
-(void)removePropertyWithName:(id)arg1 ;
-(void)updatedWithProperties:(id)arg1 ;
-(void)setUpdatedProperties:(NSMutableSet *)arg1 ;
@end
