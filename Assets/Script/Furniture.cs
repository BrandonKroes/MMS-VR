    public enum Status
{
    TOBEDOWNLOADNED,
    DOWNLOADING,
    DOWNLOADED
}

public enum RQType
{
    OBJ,
    OBJMTL
}

public class Furniture 
{
    private string slugName;
    private string url;
    public Status downloadStatus;
    public RQType rQType;


    public Furniture() { 

    }

    public Furniture(string slugName, string url, Status downloadStatus) { 
    this.slugName = slugName;
        this.url = url; 
        this.downloadStatus = downloadStatus;
        this.rQType = RQType.OBJ;
        }
    public string getSlugName()
    {
        return slugName;
    }

    public string getUrl()
    {
        return url;
    }

    public Status getDownloadStatus()
    {
        return downloadStatus;
    }


    public void setSlugName(string slugName) {
        this.slugName = slugName;
    }

    public void setUrl(string url)
    {
        this.url = url;
    }

    public void setDownloadStatus(Status downloadStatus)
    {
        this.downloadStatus = downloadStatus;
    }


    }
