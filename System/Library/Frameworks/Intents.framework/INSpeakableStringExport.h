/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol INSpeakableStringExport <NSObject,JSExport>
@property (nonatomic,retain) NSString * spokenPhrase; 
@property (nonatomic,retain) NSString * pronunciationHint; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * vocabularyIdentifier; 
@required
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)pronunciationHint;
-(void)setPronunciationHint:(id)arg1;
-(NSString *)vocabularyIdentifier;
-(void)setVocabularyIdentifier:(id)arg1;
-(NSString *)spokenPhrase;
-(void)setSpokenPhrase:(id)arg1;

@end

