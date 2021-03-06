/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <Siri/SRStarkTableViewController.h>
#import <Siri/SRStarkTableViewControllerDelegate.h>
#import <Siri/SRStarkItemController.h>

@protocol SRStarkDisambiguationSnippetControllerDelegate;
@class NSUUID, SAUIListItem, NSMutableDictionary, NSString, NSTimer, AFAnalyticsTurnBasedInstrumentationContext;

@interface SRStarkDisambiguationSnippetController : SRStarkTableViewController <SRStarkTableViewControllerDelegate, SRStarkItemController> {

	unsigned long long _preferredListItemIndex;
	SAUIListItem* _preferredListItem;
	BOOL _isGroup;
	NSMutableDictionary* _groupNameMapping;
	BOOL _isIdle;
	long long _interactionStyle;
	NSUUID* _conversationItemIdentifier;
	id<SRStarkDisambiguationSnippetControllerDelegate> _delegate;
	NSString* _disambiguationKey;
	NSTimer* _idleTimer;
	AFAnalyticsTurnBasedInstrumentationContext* _turnContext;

}

@property (getter=_disambiguationKey,nonatomic,copy) NSString * disambiguationKey;                            //@synthesize disambiguationKey=_disambiguationKey - In the implementation block
@property (assign,getter=_isIdle,nonatomic) BOOL isIdle;                                                      //@synthesize isIdle=_isIdle - In the implementation block
@property (getter=_idleTimer,nonatomic,retain) NSTimer * idleTimer;                                           //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * turnContext;                        //@synthesize turnContext=_turnContext - In the implementation block
@property (assign,nonatomic,__weak) id<SRStarkDisambiguationSnippetControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long interactionStyle;                                                      //@synthesize interactionStyle=_interactionStyle - In the implementation block
@property (nonatomic,copy) NSUUID * conversationItemIdentifier;                                               //@synthesize conversationItemIdentifier=_conversationItemIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL shouldProceedToNextCommandAtSpeechSynthesisEnd; 
-(id<SRStarkDisambiguationSnippetControllerDelegate>)delegate;
-(void)setDelegate:(id<SRStarkDisambiguationSnippetControllerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)_clearIdleTimer;
-(void)setDisambiguationKey:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_idleTimer;
-(void)setTurnContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(AFAnalyticsTurnBasedInstrumentationContext *)turnContext;
-(void)_resetIdleTimer;
-(long long)preferredUserInterfaceStyle;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_isIdle;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(NSUUID *)conversationItemIdentifier;
-(void)setConversationItemIdentifier:(NSUUID *)arg1 ;
-(void)_idleTimerFired:(id)arg1 ;
-(void)setIsIdle:(BOOL)arg1 ;
-(void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_createNewIdleTimer;
-(id)_disambiguationKey;
-(id)_disambiguationAttributedString:(id)arg1 boldedRange:(NSRange)arg2 ;
-(id)tableCellIdentifiersAndClasses;
-(id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(Class)showMoreCellClass;
-(id)newShowMoreCellWithIdentifier:(id)arg1 ;
-(void)didPressShowMore;
-(id)backgroundColorForTableViewCells;
-(long long)interactionStyle;
-(void)setInteractionStyle:(long long)arg1 ;
-(id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 turnContext:(id)arg3 ;
-(BOOL)shouldAutodisambiguate;
-(void)autodisambiguate;
@end

