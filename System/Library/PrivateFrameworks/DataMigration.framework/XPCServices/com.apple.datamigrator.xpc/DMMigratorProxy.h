/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/XPCServices/com.apple.datamigrator.xpc/com.apple.datamigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DMXPCConnection.h>

@class DMMigrator;

@interface DMMigratorProxy : DMXPCConnection {

	DMMigrator* _migrator;

}
-(id)initWithConnection:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
@end
