/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {

	BOOL _audioOnly;

}

@property (assign,nonatomic) BOOL audioOnly;              //@synthesize audioOnly=_audioOnly - In the implementation block
+(id)defaultFaceTimeAudioTitle;
+(id)defaultFaceTimeTitle;
-(id)identifier;
-(id)category;
-(unsigned long long)score;
-(void)setAudioOnly:(BOOL)arg1 ;
-(id)_coreDuetInteractionMechanisms;
-(id)_coreDuetValue;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(BOOL)audioOnly;
@end
