/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/NSSecureCoding.h>

@class NSString, GKChallengeInternal, GKPlayerInternal, GKStoreItemInternal, NSDictionary;

@interface GKChallengeInvite : NSObject <NSSecureCoding> {

	NSString* _challengeID;
	GKChallengeInternal* _challenge;
	GKPlayerInternal* _receivingPlayer;
	GKPlayerInternal* _issuingPlayer;
	GKStoreItemInternal* _storeItem;
	NSString* _goalText;
	NSDictionary* _pushDescriptor;
	NSString* _gameTitle;
	NSString* _resolvedBundleID;

}

@property (nonatomic,retain) NSString * challengeID;                          //@synthesize challengeID=_challengeID - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * challenge;                 //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * receivingPlayer;              //@synthesize receivingPlayer=_receivingPlayer - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * issuingPlayer;                //@synthesize issuingPlayer=_issuingPlayer - In the implementation block
@property (nonatomic,retain) GKStoreItemInternal * storeItem;                 //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) NSString * goalText;                             //@synthesize goalText=_goalText - In the implementation block
@property (nonatomic,retain) NSString * gameTitle;                            //@synthesize gameTitle=_gameTitle - In the implementation block
@property (nonatomic,retain) NSString * resolvedBundleID;                     //@synthesize resolvedBundleID=_resolvedBundleID - In the implementation block
@property (nonatomic,retain) NSDictionary * pushDescriptor;                   //@synthesize pushDescriptor=_pushDescriptor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GKChallengeInternal *)challenge;
-(void)setChallenge:(GKChallengeInternal *)arg1 ;
-(GKStoreItemInternal *)storeItem;
-(GKPlayerInternal *)receivingPlayer;
-(void)setIssuingPlayer:(GKPlayerInternal *)arg1 ;
-(GKPlayerInternal *)issuingPlayer;
-(NSString *)challengeID;
-(void)setStoreItem:(GKStoreItemInternal *)arg1 ;
-(void)setChallengeID:(NSString *)arg1 ;
-(void)setReceivingPlayer:(GKPlayerInternal *)arg1 ;
-(id)initWithChallenge:(id)arg1 ;
-(NSDictionary *)pushDescriptor;
-(void)setResolvedBundleID:(NSString *)arg1 ;
-(void)setGameTitle:(NSString *)arg1 ;
-(void)setGoalText:(NSString *)arg1 ;
-(void)loadGoalTextForGameDescriptor:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)challengeInternalObject;
-(void)loadDetailsWithHandler:(/*^block*/id)arg1 ;
-(NSString *)goalText;
-(NSString *)gameTitle;
-(NSString *)resolvedBundleID;
-(void)setPushDescriptor:(NSDictionary *)arg1 ;
@end

