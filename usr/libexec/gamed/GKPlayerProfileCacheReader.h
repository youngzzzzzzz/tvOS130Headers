/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKCacheReader.h>

@class NSString;

@interface GKPlayerProfileCacheReader : GKCacheReader {

	int _familiarity;
	NSString* _localPlayerGCID;
	NSString* _language;

}

@property (assign,nonatomic) int familiarity;                       //@synthesize familiarity=_familiarity - In the implementation block
@property (nonatomic,copy) NSString * localPlayerGCID;              //@synthesize localPlayerGCID=_localPlayerGCID - In the implementation block
@property (nonatomic,copy) NSString * language;                     //@synthesize language=_language - In the implementation block
+(id)readerWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4 ;
-(void)dealloc;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4 ;
-(int)familiarity;
-(void)setFamiliarity:(int)arg1 ;
-(void)readResources:(id)arg1 inDatabase:(sqlite3Ref)arg2 statementStore:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)playerProfileSQLString;
-(void)bindParametersForProfileStatement:(sqlite3_stmtRef)arg1 playerGCID:(id)arg2 ;
-(id)playerForProfileStatementResult:(sqlite3_stmtRef)arg1 ;
-(int)availablePiecesForProfileStatementResult:(sqlite3_stmtRef)arg1 ;
-(double)TTLForProfileStatementResult:(sqlite3_stmtRef)arg1 ;
-(id)processAvailableResource:(id)arg1 retrievedWithStatement:(sqlite3_stmtRef)arg2 fromDatabase:(sqlite3Ref)arg3 statementStore:(id)arg4 ;
-(void)setLocalPlayerGCID:(NSString *)arg1 ;
-(NSString *)localPlayerGCID;
@end
