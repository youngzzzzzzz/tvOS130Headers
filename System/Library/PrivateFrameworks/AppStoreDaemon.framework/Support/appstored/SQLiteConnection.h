/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SQLiteConnectionDelegate;
#import <appstored/appstored-Structs.h>
@class NSMutableArray, NSMapTable, SQLiteConnectionOptions, NSError;

@interface SQLiteConnection : NSObject {

	NSMutableArray* _afterTransactionBlocks;
	sqlite3Ref _database;
	id<SQLiteConnectionDelegate> _delegate;
	BOOL _didResetForCorruption;
	NSMapTable* _preparedStatements;
	long long _transactionDepth;
	BOOL _transactionWantsRollback;
	SQLiteConnectionOptions* _options;

}

@property (nonatomic,copy,readonly) NSError * currentError; 
@property (nonatomic,copy,readonly) SQLiteConnectionOptions * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<SQLiteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long lastChangeCount; 
-(void)dealloc;
-(SQLiteConnectionOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)open;
-(BOOL)close;
-(id<SQLiteConnectionDelegate>)delegate;
-(void)setDelegate:(id<SQLiteConnectionDelegate>)arg1 ;
-(BOOL)truncate;
-(BOOL)_open;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_close;
-(NSError *)currentError;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(id)_prepareStatement:(id)arg1 error:(id*)arg2 ;
-(void)_finalizeAllStatements;
-(id)prepareStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)dispatchAfterTransaction:(/*^block*/id)arg1 ;
-(long long)lastChangeCount;
-(BOOL)executeStatement:(id)arg1 error:(id*)arg2 bindings:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)_executeStatement:(id)arg1 error:(id*)arg2 ;
-(id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2 ;
-(void)_flushAfterTransactionBlocks;
-(BOOL)_performResetAfterCorruptionError;
-(id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2 ;
-(void)executePreparedQuery:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(BOOL)executePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_executeWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)_resetAfterCorruptionError;
-(BOOL)_resetAfterIOError;
-(BOOL)finalizePreparedStatement:(id)arg1 error:(id*)arg2 ;
-(BOOL)performSavepoint:(/*^block*/id)arg1 ;
@end
