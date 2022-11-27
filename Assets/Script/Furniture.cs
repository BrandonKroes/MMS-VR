public enum DownloadStatus
{
    toBeDownloaded,
    downloading,
    downloaded
}


public class Furniture 
{
    private string slugName;
    private string url;
    public DownloadStatus downloadStatus;



    public Furniture() { 

    }

    public Furniture(string slugName, string url, DownloadStatus downloadStatus) { 
    this.slugName = slugName;
        this.url = url; 
        this.downloadStatus = downloadStatus;
        }
    public string getSlugName()
    {
        return slugName;
    }

    public string getUrl()
    {
        return url;
    }

    public DownloadStatus getDownloadStatus()
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

    public void setDownloadStatus(DownloadStatus downloadStatus)
    {
        this.downloadStatus = downloadStatus;
    }


    }
