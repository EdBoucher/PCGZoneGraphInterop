#pragma once


#include "PCGSettings.h"
#include "PGLZoneGraphSettingsNode.generated.h"

/** Builds a collection of PCG-compatible data from ZoneGraph settings. */
UCLASS(BlueprintType, ClassGroup = (Procedural))
class  UPGLZoneGraphSettingsNode : public UPCGSettings
{
	GENERATED_BODY()

public:
	//~Begin PCGSettings interface
#if WITH_EDITOR
	virtual FName GetDefaultNodeName() const override { return FName(TEXT("GetZoneGraphSettingsData")); }
	virtual FText GetDefaultNodeTitle() const override { return NSLOCTEXT("PGLZoneGraphSettingsNode", "NodeTitle", "Get ZoneGraphSettings Data"); }
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif
	virtual bool HasDynamicPins() const override { return true; }


protected:
	virtual TArray<FPCGPinProperties> InputPinProperties() const override;
	virtual TArray<FPCGPinProperties> OutputPinProperties() const override;

	virtual FPCGElementPtr CreateElement() const override;
	//~End PCGSettings
	
};

class FPGLZoneGraphSettingsElement : public IPCGElement
{
protected:
	virtual bool ExecuteInternal(FPCGContext* Context) const override;
};