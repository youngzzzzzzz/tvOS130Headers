/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKCacheReader.h>

@class NSString;

@interface GKFriendRecommendationsCacheReader : GKCacheReader {

	NSString* _language;

}

@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
+(id)readerWithLanguage:(id)arg1 databaseConnection:(id)arg2 ;
-(void)dealloc;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)getExpirationDateStatement;
-(void)bindParametersForStatement:(sqlite3_stmtRef)arg1 withPlayer:(id)arg2 ;
-(void)readResources:(id)arg1 inDatabase:(sqlite3Ref)arg2 statementStore:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithLanguage:(id)arg1 databaseConnection:(id)arg2 ;
-(id)getRecommendedPlayerGCIDsStatement;
@end

