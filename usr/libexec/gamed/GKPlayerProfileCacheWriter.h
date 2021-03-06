/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKDataWriter.h>

@class NSString, GKDatabaseConnection;

@interface GKPlayerProfileCacheWriter : NSObject <GKDataWriter> {

	int _familiarity;
	NSString* _localPlayerID;
	NSString* _language;
	GKDatabaseConnection* _connection;

}

@property (assign,nonatomic) int familiarity;                                //@synthesize familiarity=_familiarity - In the implementation block
@property (nonatomic,retain) NSString * localPlayerID;                       //@synthesize localPlayerID=_localPlayerID - In the implementation block
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) GKDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writerWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4 ;
-(void)dealloc;
-(void)setConnection:(GKDatabaseConnection *)arg1 ;
-(GKDatabaseConnection *)connection;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4 ;
-(void)setLocalPlayerID:(NSString *)arg1 ;
-(id)profileInsertSQL;
-(id)profileUpdateSQLForResource:(id)arg1 ;
-(void)bindParametersForProfileStatement:(sqlite3_stmtRef)arg1 resource:(id)arg2 ;
-(void)writeToDatabase:(sqlite3Ref)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(/*^block*/id)arg5 ;
-(id)relationshipInsertSQL;
-(id)relationshipUpdateSQL;
-(void)bindParametersForRelationshipStatement:(sqlite3_stmtRef)arg1 resource:(id)arg2 ;
-(id)emailInsertSQL;
-(id)emailUpdateSQL;
-(void)bindParametersForEmailStatement:(sqlite3_stmtRef)arg1 email:(id)arg2 ofPlayer:(id)arg3 ;
-(void)writeResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(int)familiarity;
-(void)setFamiliarity:(int)arg1 ;
-(NSString *)localPlayerID;
@end

