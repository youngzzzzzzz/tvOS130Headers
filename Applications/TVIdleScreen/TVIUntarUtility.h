/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVIdleScreen.app/TVIdleScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVIdleScreen/TVIdleScreen-Structs.h>
@interface TVIUntarUtility : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(BOOL)_readFile:(id)arg1 toArchive:(archive*)arg2 error:(id*)arg3 ;
+(void)_setupWriteArchive:(archive*)arg1 withOptions:(int)arg2 ;
+(unsigned long long)_readNextHeaderInArchive:(archive*)arg1 toEntry:(archive_entry*)arg2 error:(id*)arg3 ;
+(BOOL)_writeHeaderToArchive:(archive*)arg1 withEntry:(archive_entry*)arg2 usingDestination:(id)arg3 error:(id*)arg4 ;
+(BOOL)_writeDataToDiskFromArchive:(archive*)arg1 usingWriteArchive:(archive*)arg2 error:(id*)arg3 ;
+(BOOL)_writeFinishEntryOnArchive:(archive*)arg1 error:(id*)arg2 ;
+(void)_cleanupReadArchive:(archive*)arg1 writeArchive:(archive*)arg2 ;
+(void)_setFileDestinationPath:(id)arg1 forEntry:(archive_entry*)arg2 ;
+(BOOL)deflateArchive:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
@end

