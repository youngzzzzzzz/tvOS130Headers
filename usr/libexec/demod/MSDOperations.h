/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <demod/NSURLConnectionDelegate.h>

@class MSDManifest, NSString, NSError, NSMutableArray;

@interface MSDOperations : NSObject <NSURLConnectionDelegate> {

	MSDManifest* _masterManifest;
	NSString* _stagingRootPath;
	NSString* _contentRootPath;
	NSString* _section;
	NSError* _error;
	long long _total;
	long long _finished;
	long long _reportedPercent;
	NSString* _containerType;
	NSString* _identifier;
	NSMutableArray* _alreadyHaveList;
	NSMutableArray* _creationList;
	id _delegate;

}

@property (retain) NSMutableArray * alreadyHaveList;                //@synthesize alreadyHaveList=_alreadyHaveList - In the implementation block
@property (retain) NSMutableArray * creationList;                   //@synthesize creationList=_creationList - In the implementation block
@property (retain) NSString * stagingRootPath;                      //@synthesize stagingRootPath=_stagingRootPath - In the implementation block
@property (retain) NSString * section;                              //@synthesize section=_section - In the implementation block
@property (retain) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long total;                                 //@synthesize total=_total - In the implementation block
@property (assign) long long finished;                              //@synthesize finished=_finished - In the implementation block
@property (assign) long long reportedPercent;                       //@synthesize reportedPercent=_reportedPercent - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * containerType;              //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)finished;
-(void)setFinished:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(long long)total;
-(NSString *)containerType;
-(void)setContainerType:(NSString *)arg1 ;
-(void)setTotal:(long long)arg1 ;
-(BOOL)process:(id*)arg1 ;
-(BOOL)verify;
-(id)initWithMasterManifest:(id)arg1 andDeviceManifest:(id)arg2 forSection:(id)arg3 ;
-(void)setStagingRootPath:(NSString *)arg1 ;
-(NSMutableArray *)creationList;
-(BOOL)downloadCreationList:(id)arg1 ;
-(void)setCreationList:(NSMutableArray *)arg1 ;
-(void)setAlreadyHaveList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)alreadyHaveList;
-(BOOL)processAlreadyHaveList:(id)arg1 ;
-(BOOL)processCreationList:(id)arg1 ;
-(BOOL)restoreAllAttributesFromManifest;
-(NSString *)stagingRootPath;
-(BOOL)downloadAndVerifyFile:(id)arg1 to:(id)arg2 withError:(id*)arg3 ;
-(long long)reportedPercent;
-(void)setReportedPercent:(long long)arg1 ;
@end

