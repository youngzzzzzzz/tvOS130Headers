/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <CloudKit/NSSecureCoding.h>

@class CKServerChangeToken;

@interface CKFetchDatabaseChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _fetchAllChanges;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                         //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setFetchAllChanges:(BOOL)arg1 ;
@end
