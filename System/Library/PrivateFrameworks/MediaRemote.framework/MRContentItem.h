/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/_MRContentItemProtobuf.h>

@class MRContentItemMetadata;

@interface MRContentItem : _MRContentItemProtobuf

@property (nonatomic,readonly) MRContentItemMetadata * itemMetadata; 
@property (nonatomic,readonly) BOOL hasCurrentLanguageOptions; 
@property (nonatomic,readonly) BOOL hasAvailableLanguageOptions; 
+(void)initialize;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(void)setSections:(id)arg1 ;
-(void)setInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 ;
-(void)setLyrics:(id)arg1 ;
-(void)setAvailableLanguageOptions:(id)arg1 ;
-(void)setCurrentLanguageOptions:(id)arg1 ;
-(id)customDictionaryRepresentation;
-(MRContentItemMetadata *)itemMetadata;
-(BOOL)hasCurrentLanguageOptions;
-(BOOL)hasAvailableLanguageOptions;
@end

