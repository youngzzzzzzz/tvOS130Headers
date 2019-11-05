/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKDataWriter.h>

@class GKDatabaseConnection, NSString;

@interface GKFriendRecommendationsCacheWriter : NSObject <GKDataWriter> {

	GKDatabaseConnection* _connection;
	NSString* _language;

}

@property (nonatomic,retain) GKDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writerWithLanguage:(id)arg1 databaseConnection:(id)arg2 ;
-(void)dealloc;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(GKDatabaseConnection *)connection;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)writeToDatabase:(sqlite3Ref)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(/*^block*/id)arg5 ;
-(void)writeResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)listExpirationDateInsertSQL;
-(id)listExpirationDateUpdateSQL;
-(void)bindParametersForListStatement:(sqlite3_stmtRef)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3 ;
-(void)bindParametersForRelationshipStatement:(sqlite3_stmtRef)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3 ;
-(id)initWithLanguage:(id)arg1 databaseConnection:(id)arg2 ;
-(id)recommendedPlayerInsertSQL;
-(id)recommendedPlayerUpdateSQL;
-(void)bindParametersForRecommendedPlayerStatement:(sqlite3_stmtRef)arg1 resource:(id)arg2 ;
-(id)recommendationRelationshipInsertSQL;
-(id)recommendationRelationshipUpdateSQL;
-(id)recommendationInsertSQL;
-(id)recommendationUpdateSQL;
-(void)bindParametersForRecommendationStatement:(sqlite3_stmtRef)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3 ;
-(id)localizationInsertSQL;
-(id)localizationUpdateSQL;
-(void)bindParametersForLocalizationStatement:(sqlite3_stmtRef)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3 ;
@end
