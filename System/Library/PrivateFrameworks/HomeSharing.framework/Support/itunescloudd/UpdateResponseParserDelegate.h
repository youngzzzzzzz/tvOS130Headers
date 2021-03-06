/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@class NSString;

@interface UpdateResponseParserDelegate : NSObject <DKDAAPParserDelegate> {

	BOOL _hasAddToPlaylistBehavior;
	unsigned char _addToPlaylistBehavior;
	unsigned _serverRevision;

}

@property (assign,nonatomic) unsigned serverRevision;                          //@synthesize serverRevision=_serverRevision - In the implementation block
@property (assign,nonatomic) BOOL hasAddToPlaylistBehavior;                    //@synthesize hasAddToPlaylistBehavior=_hasAddToPlaylistBehavior - In the implementation block
@property (assign,nonatomic) unsigned char addToPlaylistBehavior;              //@synthesize addToPlaylistBehavior=_addToPlaylistBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(unsigned)serverRevision;
-(void)setServerRevision:(unsigned)arg1 ;
-(BOOL)hasAddToPlaylistBehavior;
-(void)setHasAddToPlaylistBehavior:(BOOL)arg1 ;
-(unsigned char)addToPlaylistBehavior;
-(void)setAddToPlaylistBehavior:(unsigned char)arg1 ;
@end

