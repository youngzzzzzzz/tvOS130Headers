/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/SystemReport.appex/SystemReport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemReport/SystemReport-Structs.h>
#import <SystemReport-j105a/ComponentBase.h>

@interface ComponentSystemBase : ComponentBase
-(id)systemVersion;
-(id)systemUptime;
-(id)productClass;
-(BOOL)isInternalInstall;
-(id)deviceName;
-(id)deviceType;
-(BOOL)isPresent;
-(id)buildVersion;
-(id)serialNumber;
-(id)lastUpdateDate;
-(id)modelNumber;
-(id)deviceColor;
-(id)deviceVersion;
-(id)UDID;
-(id)chipID;
-(id)cpuArchitecture;
-(id)marketingName;
-(id)marketingVersion;
-(id)localTime;
-(void)populateAttributes:(NSMutableDictionary*)arg1 ;
-(id)ECID;
-(id)regulatoryModelNumber;
-(id)diagnosticsBuild;
-(id)diagnosticsVersion;
-(id)lastRestoreDate;
-(id)lastEraseDate;
-(id)setupCompletedDate;
-(BOOL)isBetaBuild;
-(BOOL)isGreenTeaDevice;
-(id)rootCreationDate;
-(id)setupAssistantCompletionDate;
-(BOOL)isSetupAssistantCompleted;
@end

