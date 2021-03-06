/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3DatabaseBlob : NSObject {

	sqlite3_blobRef _sqliteHandle;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)data;
-(int)readData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
-(id)initWithSQLiteHandle:(sqlite3_blobRef)arg1 ;
-(int)writeData:(id)arg1 numberOfBytes:(unsigned long long)arg2 offset:(unsigned long long)arg3 ;
@end

