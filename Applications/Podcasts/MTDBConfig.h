/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/MTCoreDataContainerConfigProvider.h>

@class NSManagedObjectModel;

@interface MTDBConfig : NSObject <MTCoreDataContainerConfigProvider> {

	NSManagedObjectModel* _model;

}

@property (nonatomic,retain) NSManagedObjectModel * model;              //@synthesize model=_model - In the implementation block
-(NSManagedObjectModel *)model;
-(id)managedObjectModel;
-(void)setModel:(NSManagedObjectModel *)arg1 ;
-(id)databaseFileUrl;
-(id)peristentStoreOptions;
@end

