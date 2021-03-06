/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface MLDDatabaseFileDiagnostic : NSObject {

	NSString* _databasePath;
	NSArray* _processesWithOpenFileHandles;
	NSDictionary* _fileAttributes;

}

@property (nonatomic,readonly) NSString * databasePath;                             //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) NSArray * processesWithOpenFileHandles;              //@synthesize processesWithOpenFileHandles=_processesWithOpenFileHandles - In the implementation block
@property (nonatomic,readonly) NSDictionary * fileAttributes;                       //@synthesize fileAttributes=_fileAttributes - In the implementation block
-(id)description;
-(NSDictionary *)fileAttributes;
-(NSString *)databasePath;
-(id)initWithDatabasePath:(id)arg1 ;
-(NSArray *)processesWithOpenFileHandles;
@end

